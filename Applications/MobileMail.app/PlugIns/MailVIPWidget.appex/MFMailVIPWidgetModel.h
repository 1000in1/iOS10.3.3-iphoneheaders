/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailVIPWidget.appex/MailVIPWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDVIPServicesProtocol;
@class NSArray;

@interface MFMailVIPWidgetModel : NSObject {

	char _firstLoad;
	char _updating;
	NSArray* _VIPs;
	id<MSDVIPServicesProtocol> _remoteProxy;

}

@property (assign,getter=isUpdating,nonatomic) char updating;                     //@synthesize updating=_updating - In the implementation block
@property (nonatomic,retain) id<MSDVIPServicesProtocol> remoteProxy;              //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,retain) NSArray * VIPs;                                      //@synthesize VIPs=_VIPs - In the implementation block
@property (assign,getter=isFirstLoad,nonatomic) char firstLoad;                   //@synthesize firstLoad=_firstLoad - In the implementation block
-(char)isFirstLoad;
-(void)preserveState;
-(NSArray *)VIPs;
-(void)fetchVIPsWithCompletion:(/*^block*/id)arg1 ;
-(void)setFirstLoad:(char)arg1 ;
-(void)_handleRemoteProxyError:(id)arg1 ;
-(void)setRemoteProxy:(id<MSDVIPServicesProtocol>)arg1 ;
-(void)setVIPs:(NSArray *)arg1 ;
-(id)_reduceFetchedVIP:(id)arg1 oldVIPs:(id)arg2 changed:(out char*)arg3 ;
-(id)init;
-(char)isUpdating;
-(void)setUpdating:(char)arg1 ;
-(void)restoreState;
-(id<MSDVIPServicesProtocol>)remoteProxy;
@end

