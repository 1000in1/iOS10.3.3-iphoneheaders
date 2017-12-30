/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface JaliscoUpdateGeniusDataOperation : CloudLibraryOperation <NSURLSessionTaskDelegate> {

	char _initialImport;
	int _geniusOperationStatus;

}

@property (assign,getter=isInitialImport,nonatomic) char initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) int geniusOperationStatus;                            //@synthesize geniusOperationStatus=_geniusOperationStatus - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInitialImport:(char)arg1 ;
-(void)_updateGeniusData;
-(void)_prepareMetadataPayloadWithCUID:(id)arg1 ;
-(void)_determineUploadURLWithCUID:(id)arg1 numberOfItems:(unsigned)arg2 ;
-(void)_uploadMetadataWithCUID:(id)arg1 toURL:(id)arg2 updateID:(id)arg3 ;
-(id)_itemsToUpload;
-(void)_determineResultsURLWhenReadyWithCUID:(id)arg1 updateID:(id)arg2 ;
-(void)_downloadSimDataFromURL:(id)arg1 additionalFieldsFromURL:(id)arg2 ;
-(id)_simDataDestinationPathURL;
-(id)_additionalFieldsDestinationPathURL;
-(void)_importGeniusData;
-(int)geniusOperationStatus;
-(id)init;
-(void)main;
-(char)isInitialImport;
@end
