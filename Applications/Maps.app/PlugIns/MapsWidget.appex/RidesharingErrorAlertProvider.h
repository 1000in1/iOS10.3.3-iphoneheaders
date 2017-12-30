/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _RidesharingApplication, NSUserActivity, NSString;

@interface RidesharingErrorAlertProvider : NSObject {

	_RidesharingApplication* _app;
	NSUserActivity* _activity;
	char _superseded;
	int _cause;
	/*^block*/id _didSupersede;

}

@property (nonatomic,readonly) int cause;                                   //@synthesize cause=_cause - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * message; 
@property (nonatomic,readonly) NSString * openAppCommandTitle; 
@property (nonatomic,readonly) NSString * dismissCommandTitle; 
@property (nonatomic,copy) id didSupersede;                                 //@synthesize didSupersede=_didSupersede - In the implementation block
-(id)_initWithCause:(int)arg1 application:(id)arg2 userActivity:(id)arg3 ;
-(NSString *)openAppCommandTitle;
-(NSString *)dismissCommandTitle;
-(void)openApp;
-(void)_supersede;
-(id)didSupersede;
-(void)setDidSupersede:(id)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(int)cause;
@end

