/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NavPrimarySignView;

@interface NavSignCollectionViewCell : UICollectionViewCell {

	NavPrimarySignView* _navSignView;

}

@property (nonatomic,readonly) NavPrimarySignView * navSignView;              //@synthesize navSignView=_navSignView - In the implementation block
-(NavPrimarySignView *)navSignView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(void)_configureConstraints;
@end

