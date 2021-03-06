/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	int _imageCount;
	int _livePhotoCount;
	int _videoCount;

}

@property (assign,nonatomic) int imageCount;                  //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int livePhotoCount;              //@synthesize livePhotoCount=_livePhotoCount - In the implementation block
@property (assign,nonatomic) int videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(int)imageCount;
-(void)setImageCount:(int)arg1 ;
-(int)livePhotoCount;
-(void)setLivePhotoCount:(int)arg1 ;
-(int)videoCount;
-(void)setVideoCount:(int)arg1 ;
@end

