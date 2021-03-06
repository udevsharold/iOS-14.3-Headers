/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WBSHistoryServiceObject : NSObject <NSSecureCoding> {

	long long _databaseID;

}

@property (nonatomic,readonly) long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)databaseID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDatabaseID:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

