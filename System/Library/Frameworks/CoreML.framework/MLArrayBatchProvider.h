/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLBatchProvider.h>

@class NSArray;

@interface MLArrayBatchProvider : NSObject <MLBatchProvider> {

	NSArray* _array;

}

@property (nonatomic,readonly) NSArray * array;              //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithFeatureProviderArray:(id)arg1 ;
-(id)featuresAtIndex:(long long)arg1 ;
-(long long)count;
-(NSArray *)array;
@end

