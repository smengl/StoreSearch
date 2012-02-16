//
//  SearchResult.h
//  StoreSearch
//
//  Created by Seak Meng Lay.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SearchResult : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *artistname;
@property (nonatomic, copy) NSString *artworkURL60;
@property (nonatomic, copy) NSString *artworkURL100;
@property (nonatomic, copy) NSString *storeURL;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSDecimalNumber *price;
@property (nonatomic, copy) NSString *genre;

- (NSComparisonResult)compareName:(SearchResult *)other;
- (NSString *)kindForDisplay;

@end
