/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_OSLogIndexTimeRangable.h>

@class _OSLogChunkFileReference, _OSLogChunkStore, NSString;

@interface _OSLogIndexFile : NSObject <_OSLogIndexTimeRangable> {

	_OSLogChunkFileReference* _cfr;
	_OSLogChunkStore* _cs;
	unsigned char _bootu[16];
	BOOL _timespanDetermined;
	unsigned long long _cot_header;
	unsigned long long _cot;
	unsigned long long _cet;
	unsigned long long _et;
	unsigned long long _ot;
	char* _path;

}

@property (nonatomic,readonly) const char* bootUUID; 
@property (nonatomic,readonly) unsigned long long oldestTime;              //@synthesize ot=_ot - In the implementation block
@property (nonatomic,readonly) unsigned long long endTime;                 //@synthesize et=_et - In the implementation block
@property (nonatomic,readonly) char* path;                                 //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)endTime;
-(const char*)bootUUID;
-(char*)path;
-(BOOL)_loadHeaderMetadata:(id)arg1 ;
-(void)dealloc;
-(id)initWithTraceFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)_determineTimespan;
-(id)initWithChunkStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadCatalogMetadataForTimespan;
-(id)copyMappedChunkStore:(id*)arg1 ;
-(unsigned long long)oldestTime;
@end

