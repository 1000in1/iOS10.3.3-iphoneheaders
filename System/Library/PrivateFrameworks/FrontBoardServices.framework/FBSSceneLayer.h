/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol FBSSceneLayerDelegate;
@class FBSScene, CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {

	FBSScene* _scene;
	CAContext* _context;
	unsigned _identifier;
	float _level;
	int _alignment;
	id<FBSSceneLayerDelegate> _delegate;
	char _shouldObserveUpdates;

}

@property (assign,nonatomic) FBSScene * scene;                                //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) id<FBSSceneLayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int alignment;                                   //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) char shouldObserveUpdates;                     //@synthesize shouldObserveUpdates=_shouldObserveUpdates - In the implementation block
@property (assign,nonatomic) float level;                                     //@synthesize level=_level - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_initWithLevel:(float)arg1 context:(id)arg2 ;
-(void)_setLevel:(float)arg1 fromObserver:(char)arg2 ;
-(char)shouldObserveUpdates;
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(void)setDelegate:(id<FBSSceneLayerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSSceneLayerDelegate>)delegate;
-(void)setLevel:(float)arg1 ;
-(float)level;
-(int)alignment;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)isCAContextLayer;
-(char)isExternalSceneLayer;
-(void)_updateProperties;
-(void)_synchronize:(/*^block*/id)arg1 ;
-(void)setScene:(FBSScene *)arg1 ;
-(FBSScene *)scene;
@end

