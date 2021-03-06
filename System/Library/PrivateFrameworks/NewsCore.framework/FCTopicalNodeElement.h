/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying> {

	NSString* _identifier;
	NSSet* _topics;
	double _score;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSSet * topics;                     //@synthesize topics=_topics - In the implementation block
@property (assign,nonatomic) double score;                       //@synthesize score=_score - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTopics:(NSSet *)arg1 ;
-(NSSet *)topics;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3 ;
-(double)score;
-(void)setScore:(double)arg1 ;
@end

