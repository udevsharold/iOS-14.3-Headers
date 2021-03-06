/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/WLKInstallable.h>

@class NSString, NSArray, NSURL, AMSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable> {

	AMSLookupItem* _item;

}

@property (nonatomic,readonly) AMSLookupItem * item;                     //@synthesize item=_item - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * appBundleIDs; 
@property (nonatomic,copy,readonly) NSArray * appAdamIDs; 
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSLookupItem *)item;
-(id)initWithLookupItem:(id)arg1 ;
-(id)init;
-(NSURL *)appStoreURL;
-(NSArray *)appBundleIDs;
-(NSString *)name;
-(NSArray *)appAdamIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
@end

