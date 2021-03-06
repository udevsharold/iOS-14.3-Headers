/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSString;

@interface REFileImage : REImage {

	NSString* _path;
	double _scale;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) double scale;                      //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

