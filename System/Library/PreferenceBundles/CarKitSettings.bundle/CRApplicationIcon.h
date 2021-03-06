/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface CRApplicationIcon : NSObject {

	char _editable;
	NSString* _bundleIdentifier;
	UIImage* _iconImage;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isEditable,nonatomic,readonly) char editable;              //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
+(char)_isApplicationEditableWithBundleIdentifier:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(char)isEditable;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(UIImage *)iconImage;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
@end

