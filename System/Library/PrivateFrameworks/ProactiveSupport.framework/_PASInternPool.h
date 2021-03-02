/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject {

	_PASLock* _lock;
	/*^block*/id _copyWithZone;

}
-(void)clear;
-(id)init;
-(BOOL)isInterned:(id)arg1 ;
-(id)internNoCopy:(id)arg1 ;
-(id)intern:(id)arg1 ;
-(id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(/*^block*/id)arg2 ;
-(id)_intern:(id)arg1 copyInput:(BOOL)arg2 ;
@end
