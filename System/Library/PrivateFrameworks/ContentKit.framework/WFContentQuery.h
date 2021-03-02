/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class WFContentPredicate, NSArray, NSDictionary, NSSet;

@interface WFContentQuery : NSObject <WFContentPropertyContainer> {

	WFContentPredicate* _predicate;
	NSArray* _sortDescriptors;
	NSDictionary* _userInfo;
	WFContentSlice _slice;

}

@property (nonatomic,readonly) WFContentPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                       //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) WFContentSlice slice;                          //@synthesize slice=_slice - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
-(WFContentSlice)slice;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setSlice:(WFContentSlice)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithPredicate:(id)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(id)description;
-(WFContentPredicate *)predicate;
-(NSSet *)containedProperties;
-(void)runWithObjects:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runWithObjects:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEvaluateObjects:(id)arg1 withPropertySubstitutor:(/*^block*/id)arg2 ;
@end
