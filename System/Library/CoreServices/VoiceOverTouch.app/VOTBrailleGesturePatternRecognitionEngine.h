/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VOTBrailleGesturePatternRecognitionEngineDelegate;
#import <vot/vot-Structs.h>
@class VOTBrailleGestureDataRepository, NSMutableArray;

@interface VOTBrailleGesturePatternRecognitionEngine : NSObject {

	VOTBrailleGestureDataRepository* _repository;
	NSMutableArray* _lastBrailleGestures;
	int _typingMode;
	CGSize _keyboardSize;
	char _shouldUseEightDotBraille;
	char _shouldReverseDots;
	id<VOTBrailleGesturePatternRecognitionEngineDelegate> _delegate;

}

@property (assign,nonatomic) id<VOTBrailleGesturePatternRecognitionEngineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char shouldUseEightDotBraille; 
@property (nonatomic,readonly) char shouldReverseDots; 
-(id)printBrailleForTouchPoints:(id)arg1 shouldLearn:(char)arg2 error:(id*)arg3 ;
-(void)unlearnLastGesture;
-(void)resetLastGestures;
-(void)setTypingMode:(int)arg1 keyboardSize:(CGSize)arg2 shouldUseEightDotBraille:(char)arg3 shouldReverseDots:(char)arg4 ;
-(void)calibrateWithTouchPoints:(id)arg1 ;
-(void)savePersistentGestureData;
-(char)areDotNumberPositionsCalibrated;
-(char)shouldUseEightDotBraille;
-(void)_populateLeftTouchPoints:(id)arg1 rightTouchPoints:(id)arg2 fromTouchPoints:(id)arg3 ;
-(id)_halfPatternFromTouches:(id)arg1 side:(unsigned)arg2 ;
-(unsigned short)_printBrailleCharacterFromBraillePattern:(id)arg1 ;
-(id)_sortTouches:(id)arg1 fromTopToBottomForSide:(unsigned)arg2 ;
-(char)shouldReverseDots;
-(id)_closestHalfPatternForOrderedTouches:(id)arg1 possibleMatches:(id)arg2 side:(unsigned)arg3 ;
-(id)_halfPatternFromOrderedTouches:(id)arg1 correspondingHalfPattern:(id)arg2 ;
-(id)_orderedTouchesFromHalfPattern:(id)arg1 ;
-(float)_totalDistanceBetweenCorrespondingPointsInTouches:(id)arg1 andTouches:(id)arg2 ;
-(float)_distanceBetweenPoint:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(char)_bothObjectsAreNilOrBothAreNonNil:(id)arg1 object:(id)arg2 ;
-(CGPoint)_averageOfOldPoint:(CGPoint)arg1 newPoint:(CGPoint)arg2 dataCount:(unsigned)arg3 ;
-(float)_averageOfOldFloat:(float)arg1 newFloat:(float)arg2 dataCount:(unsigned)arg3 ;
-(char)_halfPattern:(id)arg1 hasSameDotsAsHalfPattern:(id)arg2 ;
-(id)_averagePointValueWithDataCount:(unsigned)arg1 currentPointValue:(id)arg2 newPointValue:(id)arg3 ;
-(id)dotNumberPositions;
-(id)init;
-(void)setDelegate:(id<VOTBrailleGesturePatternRecognitionEngineDelegate>)arg1 ;
-(void)dealloc;
-(id<VOTBrailleGesturePatternRecognitionEngineDelegate>)delegate;
@end

