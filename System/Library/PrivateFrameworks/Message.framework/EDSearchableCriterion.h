/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol EDSearchableCriterion <NSObject>
@property (getter=isFullTextSearchableCriterion,nonatomic,readonly) BOOL fullTextSearchableCriterion; 
@property (nonatomic,readonly) NSString * spotlightQueryString; 
@required
-(BOOL)isFullTextSearchableCriterion;
-(NSString *)spotlightQueryString;

@end

