/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGQuestion.h>

@class NSString, NSDictionary;

@interface PGSurveyQuestion : NSObject <PGQuestion> {

	unsigned short state;
	NSDictionary* additionalInfo;
	NSString* entityIdentifier;
	double localFactoryScore;
	double score;

}

@property (nonatomic,copy,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short entityType; 
@property (nonatomic,readonly) unsigned short displayType; 
@property (nonatomic,readonly) double localFactoryScore; 
@property (assign,nonatomic) double score; 
@property (nonatomic,copy,readonly) NSDictionary * additionalInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned long long)hash;
-(unsigned short)displayType;
-(NSString *)entityIdentifier;
-(unsigned short)type;
-(NSDictionary *)additionalInfo;
-(BOOL)isEqual:(id)arg1 ;
-(void)remove;
-(double)score;
-(void)setScore:(double)arg1 ;
-(BOOL)isEquivalentToQuestion:(id)arg1 ;
-(double)localFactoryScore;
-(void)persistWithCreationDate:(id)arg1 ;
-(BOOL)isEquivalentToPersistedQuestion:(id)arg1 ;
@end

