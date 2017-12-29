/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class HUContactView, CNContact, NSAttributedString;

@interface HOUserAvatarHeaderFooterView : UITableViewHeaderFooterView {

	HUContactView* _contactView;

}

@property (nonatomic,retain) HUContactView * contactView;               //@synthesize contactView=_contactView - In the implementation block
@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSAttributedString * message; 
-(void)_setupViewsAndAutolayoutConstraints;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(NSAttributedString *)message;
-(HUContactView *)contactView;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setContactView:(HUContactView *)arg1 ;
@end
