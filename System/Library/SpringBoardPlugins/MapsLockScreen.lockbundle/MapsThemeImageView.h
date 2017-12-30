/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <MapsLockScreen/MapsTheming.h>

@class NSString;

@interface MapsThemeImageView : UIImageView <MapsTheming> {

	/*^block*/id _imageProvider;

}

@property (nonatomic,copy) id imageProvider;                        //@synthesize imageProvider=_imageProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(void)willMoveToWindow:(id)arg1 ;
-(id)imageProvider;
-(void)setImageProvider:(id)arg1 ;
-(void)_updateImage;
@end

