/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BCUBookCoverEffectsFilter <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(id)newOperationWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 waitForCPUSynchronization:(BOOL)arg6 completion:(/*^block*/id)arg7;
-(id)coverLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3;
-(id)shadowLayerWithImage:(CGImageRef)arg1 size:(CGSize)arg2 contentsScale:(double)arg3 kind:(unsigned long long)arg4;

@end
