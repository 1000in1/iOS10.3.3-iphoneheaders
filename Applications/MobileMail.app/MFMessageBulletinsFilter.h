/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MFMessageBulletinsFilter : NSObject {

	NSDate* _cutoffDate;

}

@property (nonatomic,retain) NSDate * cutoffDate;              //@synthesize cutoffDate=_cutoffDate - In the implementation block
-(id)initWithCutoffDate:(id)arg1 ;
-(NSDate *)cutoffDate;
-(char)messagePassTest:(id)arg1 ;
-(void)setCutoffDate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
@end

