/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor;

@interface _UIVisualEffectLayerConfig : NSObject {

	NSString* _filterType;
	UIColor* _fillColor;
	float _opacity;

}

@property (nonatomic,readonly) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,readonly) float opacity;                      //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) NSString * filterType;              //@synthesize filterType=_filterType - In the implementation block
+(id)layerWithFillColor:(id)arg1 opacity:(float)arg2 filterType:(id)arg3 ;
-(float)opacity;
-(UIColor *)fillColor;
-(NSString *)filterType;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end

