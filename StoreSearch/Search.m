//
//  Search.m
//  StoreSearch
//
//  Created by Seak Meng Lay.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Search.h"
@interface Search ()
@property (nonatomic, readwrite, strong) NSMutableArray *searchResults;
@end
@implementation Search
@synthesize isLoading = _isLoading;
@synthesize searchResults = _searchResults;

- (void)dealloc
{
    NSLog(@"dealloc %@", self);
}

- (void)performSearchForText:(NSString *)text category:(NSInteger)category
{
    NSLog(@"Searching...");
}
@end
