/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@class NSString, NSArray;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement> {

	NSString* _identifier;
	NSString* _firstGroupID;
	NSString* _lastGroupID;
	NSArray* _hiddenElements;

}

@property (nonatomic,copy,readonly) NSString * firstGroupID;               //@synthesize firstGroupID=_firstGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastGroupID;                //@synthesize lastGroupID=_lastGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hiddenElements;              //@synthesize hiddenElements=_hiddenElements - In the implementation block
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)feedElementType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)hiddenElements;
-(BOOL)isGap;
-(unsigned long long)hash;
-(id)copyWithHiddenElements:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)firstGroupID;
-(id)copyWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 firstGroupID:(id)arg2 lastGroupID:(id)arg3 hiddenElements:(id)arg4 ;
-(NSString *)lastGroupID;
-(id)initWithFirstGroupID:(id)arg1 lastGroupID:(id)arg2 hiddenElements:(id)arg3 ;
@end

