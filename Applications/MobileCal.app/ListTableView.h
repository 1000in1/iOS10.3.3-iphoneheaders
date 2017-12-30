/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UITableView.h>

@protocol ListTableViewDelegate;
@class UILabel;

@interface ListTableView : UITableView {

	UILabel* _noContentView;
	id<ListTableViewDelegate> _listViewDelegate;

}

@property (assign,nonatomic,__weak) id<ListTableViewDelegate> listViewDelegate;              //@synthesize listViewDelegate=_listViewDelegate - In the implementation block
@property (assign,nonatomic) char showsNoContentString; 
-(id<ListTableViewDelegate>)listViewDelegate;
-(void)setShowsNoContentString:(char)arg1 ;
-(char)showsNoContentString;
-(void)setListViewDelegate:(id<ListTableViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
@end

