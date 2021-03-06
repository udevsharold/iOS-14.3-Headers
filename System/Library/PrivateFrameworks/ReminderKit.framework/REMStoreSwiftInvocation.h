/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMFetchResultToken, NSString;

@interface REMStoreSwiftInvocation : NSObject <NSSecureCoding> {

	REMFetchResultToken* _fetchResultTokenToDiffAgainst;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) REMFetchResultToken * fetchResultTokenToDiffAgainst;              //@synthesize fetchResultTokenToDiffAgainst=_fetchResultTokenToDiffAgainst - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithFetchResultTokenToDiffAgainst:(id)arg1 ;
-(id)init;
-(REMFetchResultToken *)fetchResultTokenToDiffAgainst;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end

