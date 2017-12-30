/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/PlugIns/StocksWidget.appex/StocksWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, SWTodayRowOrnamentControl, NSArray, NSString, UIColor;

@interface SWTodayTableViewCell : UITableViewCell {

	unsigned _changeIndicator;
	/*^block*/id _ornamentWasTapped;
	UILabel* _priceLabel;
	UILabel* _tickerLabel;
	UILabel* _rowDataChangeIndicatorLabel;
	UILabel* _rowDataLabel;
	SWTodayRowOrnamentControl* _rowDataContainer;
	NSArray* _masterConstraints;
	NSArray* _changeIndicatorShowingLayoutConstraints;
	NSArray* _changeIndicatorMissingLayoutConstraints;

}

@property (nonatomic,retain) UILabel * priceLabel;                                           //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) UILabel * tickerLabel;                                          //@synthesize tickerLabel=_tickerLabel - In the implementation block
@property (nonatomic,retain) UILabel * rowDataChangeIndicatorLabel;                          //@synthesize rowDataChangeIndicatorLabel=_rowDataChangeIndicatorLabel - In the implementation block
@property (nonatomic,retain) UILabel * rowDataLabel;                                         //@synthesize rowDataLabel=_rowDataLabel - In the implementation block
@property (nonatomic,retain) SWTodayRowOrnamentControl * rowDataContainer;                   //@synthesize rowDataContainer=_rowDataContainer - In the implementation block
@property (nonatomic,retain) NSArray * masterConstraints;                                    //@synthesize masterConstraints=_masterConstraints - In the implementation block
@property (nonatomic,retain) NSArray * changeIndicatorShowingLayoutConstraints;              //@synthesize changeIndicatorShowingLayoutConstraints=_changeIndicatorShowingLayoutConstraints - In the implementation block
@property (nonatomic,retain) NSArray * changeIndicatorMissingLayoutConstraints;              //@synthesize changeIndicatorMissingLayoutConstraints=_changeIndicatorMissingLayoutConstraints - In the implementation block
@property (nonatomic,copy) NSString * price; 
@property (nonatomic,copy) NSString * ticker; 
@property (nonatomic,copy) NSString * rowData; 
@property (nonatomic,copy) UIColor * rowDataBackgroundColor; 
@property (assign,nonatomic) unsigned changeIndicator;                                       //@synthesize changeIndicator=_changeIndicator - In the implementation block
@property (nonatomic,copy) id ornamentWasTapped;                                             //@synthesize ornamentWasTapped=_ornamentWasTapped - In the implementation block
+(id)changeIndicatorBackgroundImage;
+(id)font;
-(void)setOrnamentWasTapped:(id)arg1 ;
-(void)setChangeIndicator:(unsigned)arg1 ;
-(void)setRowDataBackgroundColor:(UIColor *)arg1 ;
-(UILabel *)rowDataLabel;
-(UILabel *)tickerLabel;
-(SWTodayRowOrnamentControl *)rowDataContainer;
-(UILabel *)rowDataChangeIndicatorLabel;
-(NSArray *)changeIndicatorShowingLayoutConstraints;
-(NSArray *)changeIndicatorMissingLayoutConstraints;
-(id)ornamentWasTapped;
-(void)setRowDataContainer:(SWTodayRowOrnamentControl *)arg1 ;
-(void)_ornamentHit:(id)arg1 ;
-(void)setRowDataLabel:(UILabel *)arg1 ;
-(void)setRowDataChangeIndicatorLabel:(UILabel *)arg1 ;
-(void)setTickerLabel:(UILabel *)arg1 ;
-(UIColor *)rowDataBackgroundColor;
-(int)inverseNaturalAlignment;
-(unsigned)changeIndicator;
-(void)setChangeIndicatorShowingLayoutConstraints:(NSArray *)arg1 ;
-(void)setChangeIndicatorMissingLayoutConstraints:(NSArray *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(NSString *)rowData;
-(void)setRowData:(NSString *)arg1 ;
-(NSString *)ticker;
-(void)setTicker:(NSString *)arg1 ;
-(NSString *)price;
-(void)setPrice:(NSString *)arg1 ;
-(NSArray *)masterConstraints;
-(void)setMasterConstraints:(NSArray *)arg1 ;
-(void)setPriceLabel:(UILabel *)arg1 ;
-(UILabel *)priceLabel;
-(void)_setupViews;
@end

