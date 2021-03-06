/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-2386.appex/Diagnostic-2386
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-2386/DKDiagnosticInputs.h>

@class NSSet, NSString;

@interface UncleanShutdownHistoryInputs : NSObject <DKDiagnosticInputs> {

	NSSet* _logTypesIds;
	NSSet* _processNames;

}

@property (nonatomic,retain) NSSet * logTypesIds;                   //@synthesize logTypesIds=_logTypesIds - In the implementation block
@property (nonatomic,retain) NSSet * processNames;                  //@synthesize processNames=_processNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_logTypesWhitelist;
-(id)_generateSanitizedStringSetFromArray:(id)arg1 boundedByStringSet:(id)arg2 maxLength:(unsigned)arg3 error:(id*)arg4 ;
-(void)setLogTypesIds:(NSSet *)arg1 ;
-(id)_processNamesWhitelist;
-(void)setProcessNames:(NSSet *)arg1 ;
-(NSSet *)logTypesIds;
-(NSSet *)processNames;
-(char)validateAndInitializeParameters:(id)arg1 ;
@end

