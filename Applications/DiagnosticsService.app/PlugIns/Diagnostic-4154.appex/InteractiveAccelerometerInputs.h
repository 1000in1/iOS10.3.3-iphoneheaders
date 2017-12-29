/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4154.appex/Diagnostic-4154
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-2386/DKDiagnosticInputs.h>

@class NSNumber, NSArray, NSDictionary, NSString;

@interface InteractiveAccelerometerInputs : NSObject <DKDiagnosticInputs> {

	unsigned _componentSensor;
	NSNumber* _boundOffsetMin;
	NSNumber* _boundOffsetMax;
	NSArray* _orientationsParameter;
	float _zeroRange;
	float _degreesShiftRange;
	NSDictionary* _componentOrientationSpecifications;
	int _outputDataRate;
	float _secondsToRunOrientation;
	NSDictionary* _predicates;
	NSDictionary* _specifications;
	NSDictionary* _parameters;
	double _notStationaryTimeout;
	double _holdStationaryTimeout;

}

@property (assign,nonatomic) unsigned componentSensor;                                       //@synthesize componentSensor=_componentSensor - In the implementation block
@property (nonatomic,retain) NSNumber * boundOffsetMin;                                      //@synthesize boundOffsetMin=_boundOffsetMin - In the implementation block
@property (nonatomic,retain) NSNumber * boundOffsetMax;                                      //@synthesize boundOffsetMax=_boundOffsetMax - In the implementation block
@property (nonatomic,retain) NSArray * orientationsParameter;                                //@synthesize orientationsParameter=_orientationsParameter - In the implementation block
@property (assign,nonatomic) double notStationaryTimeout;                                    //@synthesize notStationaryTimeout=_notStationaryTimeout - In the implementation block
@property (assign,nonatomic) double holdStationaryTimeout;                                   //@synthesize holdStationaryTimeout=_holdStationaryTimeout - In the implementation block
@property (assign,nonatomic) float zeroRange;                                                //@synthesize zeroRange=_zeroRange - In the implementation block
@property (assign,nonatomic) float degreesShiftRange;                                        //@synthesize degreesShiftRange=_degreesShiftRange - In the implementation block
@property (nonatomic,retain) NSDictionary * componentOrientationSpecifications;              //@synthesize componentOrientationSpecifications=_componentOrientationSpecifications - In the implementation block
@property (assign,nonatomic) int outputDataRate;                                             //@synthesize outputDataRate=_outputDataRate - In the implementation block
@property (assign,nonatomic) float secondsToRunOrientation;                                  //@synthesize secondsToRunOrientation=_secondsToRunOrientation - In the implementation block
@property (nonatomic,retain) NSDictionary * predicates;                                      //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,retain) NSDictionary * specifications;                                  //@synthesize specifications=_specifications - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComponentSensor:(unsigned)arg1 ;
-(void)setBoundOffsetMin:(NSNumber *)arg1 ;
-(void)setBoundOffsetMax:(NSNumber *)arg1 ;
-(unsigned)componentSensor;
-(NSNumber *)boundOffsetMin;
-(NSNumber *)boundOffsetMax;
-(void)setComponentOrientationSpecifications:(NSDictionary *)arg1 ;
-(void)setSecondsToRunOrientation:(float)arg1 ;
-(NSDictionary *)componentOrientationSpecifications;
-(void)setOrientationsParameter:(NSArray *)arg1 ;
-(void)setNotStationaryTimeout:(double)arg1 ;
-(void)setHoldStationaryTimeout:(double)arg1 ;
-(NSArray *)orientationsParameter;
-(double)notStationaryTimeout;
-(double)holdStationaryTimeout;
-(float)zeroRange;
-(void)setZeroRange:(float)arg1 ;
-(float)degreesShiftRange;
-(void)setDegreesShiftRange:(float)arg1 ;
-(float)secondsToRunOrientation;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setOutputDataRate:(int)arg1 ;
-(int)outputDataRate;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)predicates;
-(NSDictionary *)specifications;
-(void)setSpecifications:(NSDictionary *)arg1 ;
-(char)validateAndInitializePredicates:(id)arg1 ;
-(char)validateAndInitializeSpecifications:(id)arg1 ;
-(char)validateAndInitializeParameters:(id)arg1 ;
@end
