/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {

	NSURLFileTypeMappingsInternal* _internal;

}
+(id)sharedMappings;
-(id)_UTIMIMETypeForExtension:(id)arg1 ;
-(id)_UTIextensionForMIMEType:(id)arg1 ;
-(id)preferredExtensionForMIMEType:(id)arg1 ;
-(id)extensionsForMIMEType:(id)arg1 ;
-(id)_init;
-(id)MIMETypeForExtension:(id)arg1 ;
@end

