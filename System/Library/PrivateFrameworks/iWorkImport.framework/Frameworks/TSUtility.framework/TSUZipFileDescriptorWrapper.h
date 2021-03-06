/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, TSUReadChannel;
@class NSObject;

@interface TSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<TSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                          //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<TSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(id)init;
-(void)dealloc;
-(int)fileDescriptor;
-(void)beginAccess;
-(void)endAccess;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(id<TSUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
@end

