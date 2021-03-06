/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>
#import <libobjc.A.dylib/DNDSBackingStore.h>

@protocol DNDSBackingStoreDelegate;
@class NSString, NSURL;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore> {

	Class _recordClass;
	NSURL* _fileURL;
	unsigned long long _versionNumber;
	BOOL _deviceOutOfSpace;
	id<DNDSBackingStoreDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSBackingStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(void)setDelegate:(id<DNDSBackingStoreDelegate>)arg1 ;
-(id<DNDSBackingStoreDelegate>)delegate;
-(id)readRecordWithError:(id*)arg1 ;
-(unsigned long long)writeRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3 ;
@end

