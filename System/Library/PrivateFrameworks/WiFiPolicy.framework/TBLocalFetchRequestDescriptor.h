/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject {

	NSFetchRequest* _fetchRequest;
	NSFetchRequest* _localFetchRequest;

}

@property (nonatomic,retain) NSFetchRequest * localFetchRequest;              //@synthesize localFetchRequest=_localFetchRequest - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                 //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(id)initWithFetchRequest:(id)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(NSFetchRequest *)localFetchRequest;
-(void)setLocalFetchRequest:(NSFetchRequest *)arg1 ;
@end

