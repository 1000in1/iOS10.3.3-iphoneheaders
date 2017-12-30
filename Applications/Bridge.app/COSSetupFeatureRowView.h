/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface COSSetupFeatureRowView : UIView {

	UIImageView* _imageView;
	UILabel* _title;
	UILabel* _body;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UILabel * body;                       //@synthesize body=_body - In the implementation block
-(CGSize)_sizeThatFits:(CGSize)arg1 doLayout:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)title;
-(UIImageView *)imageView;
-(UILabel *)body;
@end

