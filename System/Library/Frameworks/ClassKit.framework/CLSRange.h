/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSRange : CLSObject <CLSRelationable> {

	double _start;
	double _end;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double start;                             //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                               //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) double delta; 
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)compressOverlappingRanges:(id)arg1 ;
-(void)setStart:(double)arg1 ;
-(void)setEnd:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithRange:(id)arg1 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(double)start;
-(double)end;
-(double)delta;
-(id)initWithStart:(double)arg1 end:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(BOOL)overlapsWith:(id)arg1 ;
-(void)mergeWithRange:(id)arg1 ;
@end

