/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/FinishDownloadStepOperation.h>

@interface InstallDocumentDownloadOperation : FinishDownloadStepOperation {

	char _isSharedMDMDownload;
	char _isSharedODRDownload;

}
-(id)_sharedContainerPath;
-(id)_sharedAssetStagingPath:(id)arg1 ;
-(char)_moveSharedAssetFromPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(id)_sharedContainerPath:(id)arg1 ;
-(void)run;
@end

