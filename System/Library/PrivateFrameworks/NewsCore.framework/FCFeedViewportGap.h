/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@class NSString, FCFeedRefreshSession;

@interface FCFeedViewportGap : NSObject <FCFeedElement> {

	NSString* _identifier;
	FCFeedRefreshSession* _refreshSession;

}

@property (nonatomic,readonly) FCFeedRefreshSession * refreshSession;              //@synthesize refreshSession=_refreshSession - In the implementation block
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gapFromPBGap:(id)arg1 ;
+(id)pbGapFromGap:(id)arg1 refreshSession:(id)arg2 sharedStringIndex:(id)arg3 ;
-(long long)feedElementType;
-(FCFeedRefreshSession *)refreshSession;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isGap;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)description;
-(id)initWithRefreshSession:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithRefreshSession:(id)arg1 ;
@end

