/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider> {

	long long _important;
	NSDictionary* _importantProbability;

}

@property (assign,nonatomic) long long important;                              //@synthesize important=_important - In the implementation block
@property (nonatomic,retain) NSDictionary * importantProbability;              //@synthesize importantProbability=_importantProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(long long)important;
-(void)setImportant:(long long)arg1 ;
-(id)initWithImportant:(long long)arg1 importantProbability:(id)arg2 ;
-(NSDictionary *)importantProbability;
-(void)setImportantProbability:(NSDictionary *)arg1 ;
@end
