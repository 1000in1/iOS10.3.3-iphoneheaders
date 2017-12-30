/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ContaineeProtocol;
@class UIViewController;

@interface WaitingTransition : NSObject {

	char _animated;
	UIViewController*<ContaineeProtocol> _viewController;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIViewController*<ContaineeProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char animated;                                                    //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController*<ContaineeProtocol>)arg1 ;
-(char)animated;
-(UIViewController*<ContaineeProtocol>)viewController;
-(void)setAnimated:(char)arg1 ;
@end

