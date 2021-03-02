/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;              //@synthesize identifer=_identifer - In the implementation block
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)identifer;
-(void)invokeWithDocumentRoot:(id)arg1 ;
@end
