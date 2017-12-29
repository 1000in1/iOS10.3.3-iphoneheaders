/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, UIImage, UIView;

@interface MFSwipeAction : NSObject {

	char _isDestructive;
	char _canBeTriggeredBySwipe;
	char _dismissesSwipedRow;
	/*^block*/id _preHandler;
	/*^block*/id _handler;
	NSString* _title;
	UIColor* _color;
	UIImage* _icon;
	UIView* __sourceView;
	/*^block*/id _swipeDismissal;

}

@property (assign,nonatomic) UIView * _sourceView;                                                           //@synthesize _sourceView=__sourceView - In the implementation block
@property (setter=_setSwipeDismissal:,getter=_swipeDismissal,nonatomic,copy) id swipeDismissal;              //@synthesize swipeDismissal=_swipeDismissal - In the implementation block
@property (nonatomic,copy) id preHandler;                                                                    //@synthesize preHandler=_preHandler - In the implementation block
@property (nonatomic,copy) id handler;                                                                       //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                                //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                 //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) char isDestructive;                                                             //@synthesize isDestructive=_isDestructive - In the implementation block
@property (assign,nonatomic) char canBeTriggeredBySwipe;                                                     //@synthesize canBeTriggeredBySwipe=_canBeTriggeredBySwipe - In the implementation block
@property (assign,nonatomic) char dismissesSwipedRow;                                                        //@synthesize dismissesSwipedRow=_dismissesSwipedRow - In the implementation block
+(id)swipeActionWithTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setDismissesSwipedRow:(char)arg1 ;
-(void)setCanBeTriggeredBySwipe:(char)arg1 ;
-(void)performSwipeDismissal;
-(void)setIsDestructive:(char)arg1 ;
-(/*^block*/id)_swipeDismissal;
-(void)_setSwipeDismissal:(/*^block*/id)arg1 ;
-(void)executeHandler;
-(char)canBeTriggeredBySwipe;
-(char)dismissesSwipedRow;
-(void)set_sourceView:(UIView *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIView *)_sourceView;
-(char)isDestructive;
-(void)setIcon:(UIImage *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(UIImage *)icon;
-(id)preHandler;
-(void)setPreHandler:(id)arg1 ;
-(void)executePreHandler;
@end
