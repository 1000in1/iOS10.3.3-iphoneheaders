/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPStreamingDistributableUnarchiver <NSObject>
@required
-(char)handleArchivedVersions:(SCD_Struct_TS292)arg1 error:(id*)arg2;
-(char)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(id)arg2 version:(unsigned)arg3 classType:(int)arg4 stream:(id)arg5 length:(long long)arg6 relationshipTargets:(long long*)arg7 relationshipCount:(unsigned)arg8 error:(id*)arg9;
-(char)handleFileDescriptorProtoWithInputStream:(id)arg1 length:(unsigned)arg2 error:(id*)arg3;
-(char)handleClassInfoWithClassType:(int)arg1 className:(id)arg2 isProtobufClass:(char)arg3 error:(id*)arg4;

@end

