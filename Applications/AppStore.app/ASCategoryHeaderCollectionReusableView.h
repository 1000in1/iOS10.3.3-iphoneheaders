/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, UIView;

@interface ASCategoryHeaderCollectionReusableView : UICollectionReusableView {

	UILabel* _textLabel;
	UIView* _topBorder;
	UIView* _bottomBorder;

}

@property (nonatomic,readonly) UIView * topBorder;                 //@synthesize topBorder=_topBorder - In the implementation block
@property (nonatomic,readonly) UIView * bottomBorder;              //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                //@synthesize textLabel=_textLabel - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(void)_configureSubviews;
-(UIView *)bottomBorder;
-(UIView *)topBorder;
@end

