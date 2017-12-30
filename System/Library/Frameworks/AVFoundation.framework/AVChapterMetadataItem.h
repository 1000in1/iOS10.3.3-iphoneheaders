/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {

	AVChapterMetadataItemInternal* _privChapter;

}
-(id)init;
-(id)key;
-(void)dealloc;
-(id)description;
-(SCD_Struct_AV2)duration;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)locale;
-(id)languageCode;
-(SCD_Struct_AV2)time;
-(char)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(int)_valueStatus;
-(id)_initWithAsset:(id)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(SCD_Struct_AV2)arg8 duration:(SCD_Struct_AV2)arg9 ;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(void)_ensureValueLoadedSync;
-(void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2 ;
-(void)_takeValueFrom:(id)arg1 ;
-(long)_chapterGroupIndex;
-(long)_chapterIndex;
-(id)keySpace;
-(id)extraAttributes;
-(id)commonKey;
-(id)extendedLanguageTag;
-(id)startDate;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataType;
-(void)finalize;
-(void)cancelLoading;
@end

