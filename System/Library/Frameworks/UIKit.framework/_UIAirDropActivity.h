/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivity.h>

@class SFAirDropActivityViewController;

@interface _UIAirDropActivity : UIActivity {

	SFAirDropActivityViewController* _airDropViewController;
	/*^block*/id _airdropCompletion;
	int _maxPreviews;

}

@property (nonatomic,retain) SFAirDropActivityViewController * airDropViewController;              //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (nonatomic,copy) id airdropCompletion;                                                   //@synthesize airdropCompletion=_airdropCompletion - In the implementation block
@property (assign,nonatomic) int maxPreviews;                                                      //@synthesize maxPreviews=_maxPreviews - In the implementation block
-(id)activityType;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setAirDropViewController:(SFAirDropActivityViewController *)arg1 ;
-(SFAirDropActivityViewController *)airDropViewController;
-(void)setAirdropCompletion:(id)arg1 ;
-(void)setMaxPreviews:(int)arg1 ;
-(CGSize)_thumbnailSize;
-(int)maxPreviews;
-(id)airdropCompletion;
@end

