/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSRegularExpression, NSString;

@interface _IncrementalSearchOperation : NSOperation {

	NSRegularExpression* _regularExpression;
	NSString* _searchBody;
	/*^block*/id _searchResultsBlock;
	/*^block*/id _searchFinishedBlock;

}

@property (readonly) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
@property (readonly) NSString * searchBody;                                //@synthesize searchBody=_searchBody - In the implementation block
@property (readonly) id searchResultsBlock;                                //@synthesize searchResultsBlock=_searchResultsBlock - In the implementation block
@property (readonly) id searchFinishedBlock;                               //@synthesize searchFinishedBlock=_searchFinishedBlock - In the implementation block
-(void)main;
-(id)searchResultsBlock;
-(NSRegularExpression *)regularExpression;
-(id)initWithSearchString:(id)arg1 searchBody:(id)arg2 resultsBlock:(/*^block*/id)arg3 finishedBlock:(/*^block*/id)arg4 ;
-(NSString *)searchBody;
-(id)searchFinishedBlock;
@end
