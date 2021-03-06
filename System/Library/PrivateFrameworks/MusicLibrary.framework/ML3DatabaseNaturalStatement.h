/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding> {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,copy) NSString * sql;                             //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(NSString *)sql;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)parameters;
-(id)initWithCoder:(id)arg1 ;
-(void)setSql:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(id)initWithSQL:(id)arg1 parameters:(id)arg2 ;
@end

