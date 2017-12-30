/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconModel.h>

@class NSArray;

@interface SBCarPlayIconModel : SBIconModel {

	char _showsOEMIcon;
	NSArray* _hiddenBundleIdentifiers;
	CGRect _screenBounds;

}

@property (nonatomic,retain) NSArray * hiddenBundleIdentifiers;              //@synthesize hiddenBundleIdentifiers=_hiddenBundleIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                            //@synthesize screenBounds=_screenBounds - In the implementation block
@property (nonatomic,readonly) unsigned rowCount; 
@property (nonatomic,readonly) unsigned columnCount; 
@property (assign,nonatomic) char showsOEMIcon;                              //@synthesize showsOEMIcon=_showsOEMIcon - In the implementation block
-(id)initWithStore:(id)arg1 applicationDataSource:(id)arg2 ;
-(char)importState:(id)arg1 ;
-(void)didUnarchiveMetadata:(id)arg1 ;
-(id)iconModelMetadata;
-(char)showsOEMIcon;
-(void)resetCurrentIconState;
-(id)exportStateForCarKit;
-(void)setShowsOEMIcon:(char)arg1 ;
-(void)persistIconStateWithoutLayout;
-(void)_importStateWithoutLayout:(id)arg1 ;
-(void)setHiddenBundleIdentifiers:(NSArray *)arg1 ;
-(void)setScreenBounds:(CGRect)arg1 ;
-(CGRect)screenBounds;
-(unsigned)columnCount;
-(NSArray *)hiddenBundleIdentifiers;
-(char)isIconVisible:(id)arg1 ;
-(unsigned)rowCount;
@end

