/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/BannerItem.h>

@class NSString, UIImage, NSDate;

@interface LowFuelBannerItem : BannerItem {

	char _isHybrid;
	NSString* _title;
	NSString* _subtitle;
	UIImage* _image;
	UIImage* _carImage;
	NSDate* _dateCreated;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,copy) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) UIImage * carImage;                       //@synthesize carImage=_carImage - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                   //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) char isHybrid;                          //@synthesize isHybrid=_isHybrid - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(void)setIsHybrid:(char)arg1 ;
-(void)setCarImage:(UIImage *)arg1 ;
-(void)updateFromGuidanceChange:(id)arg1 ;
-(char)matchingGuidanceInfo:(id)arg1 ;
-(id)initWithGuidanceChange:(id)arg1 ;
-(UIImage *)carImage;
-(id)init;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(/*^block*/id)action;
-(UIImage *)image;
-(unsigned)priority;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(char)isHybrid;
-(char)isSticky;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)sortDate;
@end

