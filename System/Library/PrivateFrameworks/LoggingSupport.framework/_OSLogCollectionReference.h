/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject {

	_OSLogDirectoryReference* _diagnosticsDirectoryReference;
	_OSLogDirectoryReference* _timesyncReference;
	_OSLogDirectoryReference* _UUIDTextReference;

}

@property (nonatomic,readonly) _OSLogDirectoryReference * diagnosticsDirectoryReference;              //@synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * timesyncReference;                          //@synthesize timesyncReference=_timesyncReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * UUIDTextReference;                          //@synthesize UUIDTextReference=_UUIDTextReference - In the implementation block
+(id)localDBRefWithError:(id*)arg1 ;
+(id)referenceWithURL:(id)arg1 error:(id*)arg2 ;
-(_OSLogDirectoryReference *)timesyncReference;
-(_OSLogDirectoryReference *)diagnosticsDirectoryReference;
-(id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3 ;
-(_OSLogDirectoryReference *)UUIDTextReference;
-(void)close;
@end
