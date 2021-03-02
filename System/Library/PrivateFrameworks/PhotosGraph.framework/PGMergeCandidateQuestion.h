/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGSurveyQuestion.h>

@class NSString, PHPerson, NSDictionary;

@interface PGMergeCandidateQuestion : PGSurveyQuestion {

	unsigned short _type;
	unsigned short _displayType;
	unsigned short _state;
	unsigned short _entityType;
	NSString* _entityIdentifier;
	double _score;
	PHPerson* _person;
	NSDictionary* _additionalInfo;

}

@property (nonatomic,readonly) PHPerson * person;              //@synthesize person=_person - In the implementation block
+(id)questionForPerson:(id)arg1 ;
-(unsigned short)entityType;
-(PHPerson *)person;
-(id)initWithPerson:(id)arg1 score:(double)arg2 ;
-(unsigned short)state;
-(unsigned long long)hash;
-(unsigned short)displayType;
-(id)entityIdentifier;
-(unsigned short)type;
-(id)additionalInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1 ;
-(BOOL)isEqualToQuestion:(id)arg1 ;
-(void)persistWithCreationDate:(id)arg1 ;
@end
