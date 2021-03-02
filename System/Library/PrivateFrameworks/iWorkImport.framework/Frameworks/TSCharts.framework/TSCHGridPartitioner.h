/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCHGridPartitioner : NSObject {

	CGSize _targetSize;
	CGRect _sourceRect;
	CGAffineTransform _transform;

}

@property (nonatomic,readonly) CGSize targetSize;                        //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) CGRect sourceRect;                        //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
-(CGAffineTransform)transform;
-(CGSize)targetSize;
-(CGRect)sourceRect;
-(id)initWithSourceSize:(CGSize)arg1 gridWidth:(unsigned long long)arg2 gridHeight:(unsigned long long)arg3 ;
-(unsigned long long)gridKeyForSourcePoint:(CGPoint)arg1 ;
-(id)initWithSourceRect:(CGRect)arg1 gridWidth:(unsigned long long)arg2 gridHeight:(unsigned long long)arg3 ;
@end
