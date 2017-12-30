/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <Stocks/StocksController.h>

@protocol StocksTopLevelViewController;
@class UIViewController, StocksBackSideNavigationController, StocksBackSideViewController;

@interface StocksMainController : StocksController {

	char _showingBackside;
	char _updateStocksOnFlipToFront;
	char _updateChartOnFlipToFront;
	UIViewController*<StocksTopLevelViewController> _frontSideViewController;
	StocksBackSideNavigationController* _backSideNavigationController;
	StocksBackSideViewController* _backSideViewController;

}

@property (assign,nonatomic) char showingBackside; 
+(id)sharedStocksController;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)prepareForApplicationScreenshot;
-(void)showStockPickerAnimated:(char)arg1 ;
-(id)frontSideViewController;
-(void)setShowingBackside:(char)arg1 ;
-(id)newsView;
-(void)updateChartData;
-(void)updateStockDataForAllStocks:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)stocksListChanged;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(char)arg2 ;
-(char)shouldUpdateSelectedStockComprehensive;
-(char)shouldSupportOrientationsFromPresentedViewController:(id)arg1 ;
-(void)_handleStatusBarHeightChange:(id)arg1 ;
-(void)switchToBackIfNeeded;
-(void)switchToBack;
-(void)setShowingBackside:(char)arg1 animated:(char)arg2 ;
-(void)backSideDone;
-(id)backsideNavigationController;
-(void)_showBacksideAnimated:(char)arg1 showPicker:(char)arg2 ;
-(void)_showBacksideAnimated:(char)arg1 ;
-(void)_dismissEditViewAnimated:(char)arg1 ;
-(id)backsideView;
-(char)showingBackside;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)resume;
-(void)run;
-(char)isLoading;
-(void)willResignActive;
-(void)newsUpdater:(id)arg1 didReceiveNewsItems:(id)arg2 ;
-(id)chartView;
-(id)listView;
@end

