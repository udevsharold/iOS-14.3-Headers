/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCFeedRange, NSString;

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming> {

	FCFeedRange* _feedRange;

}

@property (nonatomic,retain) FCFeedRange * feedRange;               //@synthesize feedRange=_feedRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithFeedRange:(id)arg1 ;
+(id)transformationWithDateRange:(id)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(FCFeedRange *)feedRange;
-(id)transformFeedItems:(id)arg1 ;
@end

